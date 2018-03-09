// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Drawing.Primitives/1.6.0/Wedge.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Primitiv-af20238a.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct WedgeCoverage;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// internal abstract class WedgeCoverage :10
// {
uType* WedgeCoverage_typeof();
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this);

struct WedgeCoverage : ::g::Fuse::Drawing::Primitives::LimitCoverage
{
    float StartAngle;
    float EndAngle;

    void ctor_1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
