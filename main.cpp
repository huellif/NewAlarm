#include <apgtask.h>

TInt E32Main()
{
    RProcess proc;
    User::LeaveIfError(proc.Create(_L("alarmeditorapp.exe"),KNullDesC));
    proc.Resume();
    proc.Close();
    return 0;
}
