#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAsyncResourceResponse.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAsyncResourceResponse.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct UserImageDataImpl : public ::cohtml::IAsyncResourceResponse::UserImageData {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UserImageDataImpl : public ::cohtml::IAsyncResourceResponse::UserImageData {};
#else // @header-generator platform
struct UserImageDataImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
