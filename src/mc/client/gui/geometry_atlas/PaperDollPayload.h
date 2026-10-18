#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct PaperDollPayload
: public ::std::variant<GeometryAtlas::PaperDollTransformPayload, GeometryAtlas::InitializeCallbackPayload> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PaperDollPayload
: public ::std::variant<::GeometryAtlas::PaperDollTransformPayload, ::GeometryAtlas::InitializeCallbackPayload> {};
#else // @header-generator platform
struct PaperDollPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
