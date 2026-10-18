#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct AttributeDescription {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/Description.h"

struct AttributeDescription : public ::Description {};
#endif // @header-generator platform
