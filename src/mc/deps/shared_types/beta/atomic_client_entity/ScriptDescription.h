#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct ScriptDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mInitialize;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPreAnimation;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAnimate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mInitialize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPreAnimation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAnimate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::Beta::AtomicClientEntity::ScriptDescription const&) const;

    MCAPI ~ScriptDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
