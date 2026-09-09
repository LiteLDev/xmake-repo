#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/Define.h"

namespace mce::framebuilder::bgfxbridge {

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

} // namespace mce::framebuilder::bgfxbridge
