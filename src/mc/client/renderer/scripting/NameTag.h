#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Quaternion.h"
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
struct NameTag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                    mPosition;
    ::ll::TypedStorage<4, 20, std::optional<Quaternion>> mRotation;
    ::ll::TypedStorage<8, 24, std::string>               mString;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mColor;
    ::ll::TypedStorage<4, 4, float>                      mScale;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                       mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                       mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                       mShowTextBackface;
    ::ll::TypedStorage<4, 4, uint>                       mMaxLineLengths;
    // NOLINTEND

public:
    // prevent constructor by default
    NameTag& operator=(NameTag const&);
    NameTag();
};
#else // @header-generator platform
struct NameTag {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
