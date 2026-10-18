#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/Define.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
class DefineFlags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefineFlags();

    MCNAPI bool isDefined(::mce::framebuilder::bgfxbridge::Define const) const;

    MCNAPI void set(uchar const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::framebuilder::bgfxbridge::DefineFlags translateDefines(std::set<std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class DefineFlags {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
