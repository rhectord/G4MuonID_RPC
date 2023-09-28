#include "Run.hh"
#include "Randomize.hh"

RunAction::RunAction()
{

	G4AnalysisManager *man = G4AnalysisManager::Instance();

	man->CreateNtuple("Hits","Hits");
	man->CreateNtupleIColumn("fEvent");
	man->CreateNtupleDColumn("fX");
	man->CreateNtupleDColumn("fY");
	man->CreateNtupleDColumn("fZ");
	man->FinishNtuple(0);
}

RunAction::~RunAction()
{}

void RunAction::BeginOfRunAction(const G4Run* run)
{
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	//G4int runID = run->GetRunID();
	
	//std::stringstream strRunID;
	//strRunID << runID;
	
	
	man->OpenFile("output.root");
	

	
	
	
}

void RunAction::EndOfRunAction(const G4Run*)
{
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	man->Write();
	man->CloseFile();
}
