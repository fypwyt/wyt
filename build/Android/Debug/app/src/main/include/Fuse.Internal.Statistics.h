// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Internal/Statistics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :5
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval);

struct Statistics : uObject
{
    static double ContinuousFilterAlpha(double elapsed, double period);
};
// }

}}} // ::g::Fuse::Internal
