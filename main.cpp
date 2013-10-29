#include <apacmdln.h>
#include <APGCLI.H>

int main(int argc, char *argv[])
{
    CApaCommandLine* commandLine = CApaCommandLine::NewLC();
    commandLine->SetCommandL(EApaCommandRun);
    commandLine->SetExecutableNameL(_L("alarmeditorapp.exe"));
    RApaLsSession apaLsSession;
    User::LeaveIfError(apaLsSession.Connect());
    CleanupClosePushL(apaLsSession);
    User::LeaveIfError(apaLsSession.StartApp(*commandLine));
    CleanupStack::PopAndDestroy(&apaLsSession);
    CleanupStack::PopAndDestroy(commandLine);
    return 1;
}
