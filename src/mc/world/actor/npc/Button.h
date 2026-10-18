#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mRawName;
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mRawName;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::npc::Button& operator=(std::string_view);

    MCNAPI ~Button();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::npc::Button& operator=(::std::string_view newName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace npc
