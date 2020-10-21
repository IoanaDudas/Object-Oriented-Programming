//
//#include <assert.h>
//#include <iostream>
//#include "test.h"
//#include "Tape.h"
//#include "DynamicVector.h"
//#include "InMemoryRepository.h"
//#include "InMemoryRepositoryHelper.h"
//#include "Service.h"
//
//using namespace std;
//
//Date testCreateDate()
//{
//    Date date = Date(2,5,2019);
//    return date;
//}
//void GetDay_ValidInput_ReturnsDay()
//{
//    Date date = testCreateDate();
//    assert(date.getDay() == 2);
//}
//void GetMonth_ValidInput_ReturnsMonth()
//{
//    Date date = testCreateDate();
//    assert(date.getMonth() == 5);
//}
//void GetYear_ValidInput_ReturnsYear()
//{
//    Date date = testCreateDate();
//    assert(date.getYear() == 2019);
//}
//void SetDay_ValidInput_ModifiesDay()
//{
//    Date date = testCreateDate();
//    date.setDay(4);
//    assert(date.getDay() == 4);
//}
//void SetMonth_ValidInput_ModifiesMonth()
//{
//    Date date = testCreateDate();
//    date.setMonth(8);
//    assert(date.getMonth() == 8);
//}
//void SetYear_ValidInput_ModifiesYear()
//{
//    Date date = testCreateDate();
//    date.setYear(2000);
//    assert(date.getYear() == 2000);
//}
//void ToString_FirstCase()
//{
//    Date date = Date(22,12,2019);
//    assert(date.toString() == "22-12-2019");
//}
//void ToString_SecondCase()
//{
//    Date date = Date(2,12,2019);
//    assert(date.toString() == "02-12-2019");
//}
//void ToString_ThirdCase()
//{
//    Date date = Date(22,2,2019);
//    assert(date.toString() == "22-02-2019");
//}
//void ToString_FourthCase()
//{
//    Date date = Date(2,2,2019);
//    assert(date.toString() == "02-02-2019");
//}
//
//
//void testDate()
//{
//    GetDay_ValidInput_ReturnsDay();
//    GetMonth_ValidInput_ReturnsMonth();
//    GetYear_ValidInput_ReturnsYear();
//    SetDay_ValidInput_ModifiesDay();
//    SetMonth_ValidInput_ModifiesMonth();
//    SetYear_ValidInput_ModifiesYear();
//    ToString_FirstCase();
//    ToString_SecondCase();
//    ToString_ThirdCase();
//    ToString_FourthCase();
//}
//
//
//Tape testCreateTape()
//{
//    Date currentDate = Date(2,5,2019);
//    Tape tape = Tape("T12","restaurant exterior",currentDate,6,"preview12.mp4");
//    return tape;
//}
//void GetTitle_ValidInput_ReturnsTitle()
//{
//    Tape tape = testCreateTape();
//    assert(tape.getTitle()=="T12");
//}
//void GetFilmedAt_ValidInput_ReturnsFilmedAt()
//{
//    Tape tape = testCreateTape();
//    assert(tape.getFilmedAt() == "restaurant exterior");
//}
//void GetCreationDate_ValidInput_ReturnsCreationDate()
//{
//    Tape tape = testCreateTape();
//    Date currentDate = Date(2,5,2019);
//    assert(tape.getCreationDate().toString() == currentDate.toString());
//}
//void GetAccessCount_ValidInput_ReturnsAccessCount()
//{
//    Tape tape = testCreateTape();
//    assert(tape.getAccessCount() == 6);
//}
//void GetFootagePreview_ValidInput_ReturnsFootagePreview()
//{
//    Tape tape = testCreateTape();
//    assert(tape.getFootagePreview() == "preview12.mp4");
//}
//void SetTitle_ValidInput_ModifiesTitle()
//{
//    Tape tape = testCreateTape();
//    tape.setTitle("T222");
//    assert(tape.getTitle() == "T222");
//}
//void SetFilmedAt_ValidInput_ModifiesFilmedAt()
//{
//    Tape tape = testCreateTape();
//    tape.setFilmedAt("restaurant interior");
//    assert(tape.getFilmedAt() == "restaurant interior");
//}
//void SetCreationDate_ValidInput_ModifiesCreationDate()
//{
//    Tape tape = testCreateTape();
//    Date newDate = Date(4, 8, 2000);
//    tape.setCreationDate(newDate);
//    assert(tape.getCreationDate().toString() == newDate.toString());
//}
//void SetAccessCount_ValidInput_ModifiesAccessCount()
//{
//    Tape tape = testCreateTape();
//    tape.setAccessCount(1);
//    assert(tape.getAccessCount() == 1);
//}
//void SetFootagePreview_ValidInput_ModifiesFootagePreview()
//{
//    Tape tape = testCreateTape();
//    tape.setFootagePreview("preview222.mp4");
//    assert(tape.getFootagePreview() == "preview222.mp4");
//}
//void ToStringTape()
//{
//    Tape tape = testCreateTape();
//    assert(tape.toString() == "T12, restaurant exterior, 02-05-2019, 6, preview12.mp4");
//}
//void DefaultConstructor()
//{
//    Tape tape;
//    Tape tape1 = Tape("", "", Date(1, 1, 2000), 0, "");
//    assert(tape.toString() == tape1.toString());
//}
//
//
//void testTape()
//{
//    GetTitle_ValidInput_ReturnsTitle();
//    GetFilmedAt_ValidInput_ReturnsFilmedAt();
//    GetCreationDate_ValidInput_ReturnsCreationDate();
//    GetAccessCount_ValidInput_ReturnsAccessCount();
//    GetFootagePreview_ValidInput_ReturnsFootagePreview();
//    SetTitle_ValidInput_ModifiesTitle();
//    SetFilmedAt_ValidInput_ModifiesFilmedAt();
//    SetCreationDate_ValidInput_ModifiesCreationDate();
//    SetAccessCount_ValidInput_ModifiesAccessCount();
//    SetFootagePreview_ValidInput_ModifiesFootagePreview();
//    ToStringTape();
//    DefaultConstructor();
//}
//
//
//void Add_ValidInput_AddedToDynamicVector()
//{
//    DynamicVector<TElem> vector = DynamicVector<TElem>(1);
//    vector.add(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(vector.getIndex(0).getTitle() == "T12");
//}
//void GetSize_TestSize_AddedToDynamicVector()
//{
//    DynamicVector<TElem> vector = DynamicVector<TElem>(1);
//    vector.add(Tape());
//    assert(vector.getSize() == 1);
//}
//void Resize_CapacityReached_NoErrors()
//{
//    DynamicVector<TElem> vector = DynamicVector<TElem>(1);
//    vector.add(Tape());
//    vector.add(Tape());
//    assert(vector.getSize() == 2);
//}
//void GetIndex_ValidInput_AddedToDynamicVector()
//{
//    DynamicVector<TElem> vector = DynamicVector<TElem>(1);
//
//    vector.add(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(vector.getIndex(0).getAccessCount() == 6);
//}
//void SetAtIndex_ValidInput_ModifiedDynamicVector()
//{
//    DynamicVector<TElem> vector = DynamicVector<TElem>(1);
//    vector.add(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    vector.setAtIndex(0, Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(vector.getIndex(0).getTitle() == "T12");
//}
//
//void testDynamicVector()
//{
//    Add_ValidInput_AddedToDynamicVector();
//    GetSize_TestSize_AddedToDynamicVector();
//    Resize_CapacityReached_NoErrors();
//    GetIndex_ValidInput_AddedToDynamicVector();
//    SetAtIndex_ValidInput_ModifiedDynamicVector();
//}
//
//
//void AddTape_ValidInput()
//{
//    InMemoryRepository repository;
//    assert(repository.addTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4")) == true);
//}
//void AddTape_DuplicateTitle()
//{
//    InMemoryRepository repository;
//    repository.addTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(repository.addTape(Tape("T12","bar interior",Date(4,7,1999),6,"preview1100.mp4")) == false);
//}
//void RemoveTape_ValidInput()
//{
//    InMemoryRepository repository;
//    std::string title = "T12";
//    repository.addTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(repository.removeTape(title) == true);
//}
//void RemoveTape_TapeNonexistent()
//{
//    InMemoryRepository repository;
//    std::string title = "T12";
//    assert(repository.removeTape(title) == false);
//}
//void UpdateTape_TapeNonexistent()
//{
//    InMemoryRepository repository;
//    assert(repository.updateTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4")) == false);
//}
//void UpdateTape_ValidInput()
//{
//    InMemoryRepository repository;
//    repository.addTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(repository.updateTape(Tape("T12","bar interior",Date(4,7,1999),6,"preview1100.mp4")) == true);
//}
//void GetLength_ValidInput()
//{
//    InMemoryRepository repository;
//    repository.addTape(Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    repository.addTape(Tape("T13","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    repository.addTape(Tape("T14","restaurant exterior",Date(2,5,2019),6,"preview12.mp4"));
//    assert(repository.getLength() == 3);
//}
//void GetAllTapes_ValidInput()
//{
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    std::vector<TElem> vector;
//    InMemoryRepository repository;
//    repository.addTape(tape1);
//    repository.addTape(tape2);
//    vector = repository.getAllTapes();
//    assert(vector.size() == 2);
//}
//void NextRepository_WithinTheSize()
//{
//    InMemoryRepository repository;
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    repository.addTape(tape1);
//    assert(repository.nextRepository().getTitle() == tape1.getTitle());
//}
//void NextRepository_BackFromTheBeginning()
//{
//    InMemoryRepository repository;
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape3 = Tape("T14","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    repository.addTape(tape1);
//    repository.addTape(tape2);
//    repository.addTape(tape3);
//    repository.nextRepository();
//    repository.nextRepository();
//    repository.nextRepository();
//    repository.setFilename("test.txt");
//    assert(repository.nextRepository().getTitle() == tape1.getTitle());
//}
//
//
//void testInMemoryRepository()
//{
//    AddTape_ValidInput();
//    AddTape_DuplicateTitle();
//    RemoveTape_ValidInput();
//    RemoveTape_TapeNonexistent();
//    UpdateTape_TapeNonexistent();
//    UpdateTape_ValidInput();
//    GetLength_ValidInput();
//    GetAllTapes_ValidInput();
//    NextRepository_WithinTheSize();
//    NextRepository_BackFromTheBeginning();
//}
//
//
//void SaveTape_ValidInput()
//{
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    assert(helper.saveTape(tape1) == true);
//}
//void SaveTape_DuplicateInput()
//{
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    helper.saveTape(tape1);
//    assert(helper.saveTape(tape1) == false);
//}
//void GetAllHelperTapes_ValidInput()
//{
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    std::vector<TElem> vector;
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    helper.saveTape(tape1);
//    helper.saveTape(tape2);
//    vector = helper.getAllHelperTapes();
//    assert(vector.size() == 2);
//}
//
//
//void testRepositoryHelper()
//{
//    SaveTape_ValidInput();
//    SaveTape_DuplicateInput();
//    GetAllHelperTapes_ValidInput();
//}
//
//
//void AddTapeService_ValidInput()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4")==true);
//}
//void AddTapeService_InvalidInputDateDay()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.addTapeService("T12","restaurant exterior","0A","05","2019","6","preview12.mp4")== false);
//}
//void AddTapeService_InvalidInputDateMonth()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.addTapeService("T12","restaurant exterior","01","AA","2019","6","preview12.mp4")== false);
//}
//void AddTapeService_InvalidInputDateYear()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.addTapeService("T12","restaurant exterior","01","05","20A4","6","preview12.mp4")== false);
//}
//void AddTapeService_InvalidInputAccessCount()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.addTapeService("T12","restaurant exterior","02","05","2019","A","preview12.mp4")== false);
//}
//void UpdateTapeService_ValidInput()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.updateTapeService("T12","restaurant interior","04","08","2000","20","preview13.mp4") == true);
//}
//void UpdateTapeService_InvalidInputDateDay()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.updateTapeService("T12","restaurant exterior","0A","05","2019","6","preview12.mp4")== false);
//}
//void UpdateTapeService_InvalidInputDateMonth()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.updateTapeService("T12","restaurant exterior","02","0A","2019","6","preview12.mp4")== false);
//}
//void UpdateTapeService_InvalidInputDateYear()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.updateTapeService("T12","restaurant exterior","02","05","201A","6","preview12.mp4")== false);
//}
//void UpdateTapeService_InvalidInputAccessCount()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.updateTapeService("T12","restaurant exterior","02","05","2019","A","preview12.mp4")== false);
//}
//void RemoveTapeService_ValidInput()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.removeTapeService("T12") == true);
//}
//void AddTapeService_DuplicateTape()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.addTapeService("T12","restaurant interior","04","08","2000","20","preview13.mp4") == false);
//}
//void UpdateTapeService_TapeNonexistent()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.updateTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4") == false);
//}
//void RemoveTapeService_TapeNonexistent()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    assert(service.removeTapeService("T12") == false);
//}
//void GetAllTapesService()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    service.addTapeService("T13","castle exterior","03","06","2018","7","preview13.mp4");
//    service.addTapeService("T14","restaurant interior","04","07","2017","8","preview14.mp4");
//    std::vector<TElem> tapeVector = service.getAllTapesService();
//    assert(tapeVector.size() == 3);
//}
//void SaveTapeService_FirstSavedTape()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    Service service = Service(repository);
//    std::vector<TElem> tapeListModeB;
//    service.addTapeService("T13","restaurant exterior","02","05","2019","6","preview12.mp4");
//    tapeListModeB = service.getAllTapesService();
//    assert(service.saveTapeService("T13", tapeListModeB) == true);
//}
//void SaveTapeService_InvalidTitle()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    Service service = Service(repository);
//    std::vector<TElem> tapeListModeB;
//    assert(service.saveTapeService("", tapeListModeB) == false);
//}
//void GetAllHelperTapesService()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    InMemoryRepositoryHelper helper = InMemoryRepositoryHelper();
//    Service service = Service(repository);
//    service.getAllHelperTapesService();
//}
//void NextService()
//{
//    InMemoryRepository repository = InMemoryRepository();
//    Service service = Service(repository);
//    service.addTapeService("T12","restaurant exterior","02","05","2019","6","preview12.mp4");
//    assert(service.nextService().getTitle() == "T12");
//}
//
//
//void testService()
//{
//    AddTapeService_ValidInput();
//    AddTapeService_InvalidInputDateDay();
//    AddTapeService_InvalidInputDateMonth();
//    AddTapeService_InvalidInputDateYear();
//    AddTapeService_InvalidInputAccessCount();
//    UpdateTapeService_ValidInput();
//    UpdateTapeService_InvalidInputDateDay();
//    UpdateTapeService_InvalidInputDateMonth();
//    UpdateTapeService_InvalidInputDateYear();
//    UpdateTapeService_InvalidInputAccessCount();
//    RemoveTapeService_ValidInput();
//    AddTapeService_DuplicateTape();
//    UpdateTapeService_TapeNonexistent();
//    RemoveTapeService_TapeNonexistent();
//    GetAllTapesService();
//    //SaveTapeService_FirstSavedTape();
//    //SaveTapeService_InvalidTitle();
//    //GetAllHelperTapesService();
//    NextService();
//}
//
//
//void File_AddTape_ValidInput()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    assert(repository.addTape(tape) == true);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_AddTape_DuplicateTitle()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    repository.addTape(tape);
//    assert(repository.addTape(tape) == false);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_RemoveTape_ValidInput()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    repository.addTape(tape);
//    repository.addTape(tape2);
//    assert(repository.removeTape("T12") == true);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_RemoveTape_TapeNonexistent()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    assert(repository.removeTape("T12") == false);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_UpdateTape_TapeNonexistent()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape newTape = Tape("T12", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    assert(repository.updateTape(newTape) == false);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_UpdateTape_ValidInput()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    Tape newTape = Tape("T12", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    repository.addTape(tape);
//    repository.addTape(tape2);
//    assert(repository.updateTape(newTape) == true);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_GetLength_ValidInput()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    repository.addTape(tape);
//    repository.addTape(tape2);
//    assert(repository.getLength() == 2);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_GetAllTapes_ValidInput()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    std::vector<TElem> vector;
//    repository.addTape(tape);
//    repository.addTape(tape2);
//    vector = repository.getAllTapes();
//    assert(vector.size() == 2);
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_NextRepository_WithinTheSize()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13", "restaurant interior", Date(6, 7, 1234), 9, "preview.mp4");
//    repository.addTape(tape);
//    repository.addTape(tape2);
//    assert(repository.nextRepository().getTitle() == tape.getTitle());
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//void File_NextRepository_BackFromTheBeginning()
//{
//    FileRepository repository;
//    fstream inFile;
//    repository.setFilename("test.txt");
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//    Tape tape1 = Tape("T12","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape2 = Tape("T13","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    Tape tape3 = Tape("T14","restaurant exterior",Date(2,5,2019),6,"preview12.mp4");
//    repository.addTape(tape1);
//    repository.addTape(tape2);
//    repository.addTape(tape3);
//    repository.nextRepository();
//    repository.nextRepository();
//    repository.nextRepository();
//    assert(repository.nextRepository().getTitle() == tape1.getTitle());
//    inFile.open("test.txt", std::ofstream::out);
//    inFile.close();
//}
//
//
//void testFileRepository()
//{
//    File_AddTape_ValidInput();
//    File_AddTape_DuplicateTitle();
//    File_RemoveTape_ValidInput();
//    File_RemoveTape_TapeNonexistent();
//    File_UpdateTape_TapeNonexistent();
//    File_UpdateTape_ValidInput();
//    File_GetLength_ValidInput();
//    File_GetAllTapes_ValidInput();
//    File_NextRepository_WithinTheSize();
//    File_NextRepository_BackFromTheBeginning();
//}
