#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OtherImpulse.h"
#include "mc/entity/components/WindChargeImpulse.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ImpulseOrigin : public ::std::variant<OtherImpulse, WindChargeImpulse> {};
#else // @header-generator platform
struct ImpulseOrigin : public ::std::variant<::OtherImpulse, ::WindChargeImpulse> {};
#endif // @header-generator platform
