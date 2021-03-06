{
  cout << "\nI'm executing rootlogon.C\n" << endl;
  string currentFile =  __FILE__;
  string currentWorkingDir = currentFile.substr(0, currentFile.find("./rootlogon.C"));
  cout << "The Working Direcotry is:\n\t" << currentWorkingDir << "\n"<< endl;
  gErrorIgnoreLevel = kError;
  string srcdir = currentWorkingDir + "Sources/";
  string incdir = currentWorkingDir + "Includes/";
  string lhapdfdir = "/user/aleonard/lhapdf-5.9.1/include/";
  string roounfolddir = currentWorkingDir + "RooUnfold-1.1.1/";

  cout << "--------------------------------------------------------------------------------\n" << endl; 
  cout << "Adding " << incdir << " to includes directories..." << endl;
  gSystem->AddIncludePath(string("-I" + incdir).c_str());
  cout << "Adding " << lhapdfdir << " to includes directories..." << endl;
  gSystem->AddIncludePath(string("-I" + lhapdfdir).c_str());
  cout << "Adding " << roounfolddir << "src" << " to includes directories..." << endl;
  gSystem->AddIncludePath(string("-I" + roounfolddir + "src").c_str());
  cout << "Loading RooUnfold libraries..." << endl;
  gSystem->Load(string(roounfolddir + "libRooUnfold").c_str());
  cout << "\n";
  cout << "--------------------------------------------------------------------------------\n" << endl; 
}
