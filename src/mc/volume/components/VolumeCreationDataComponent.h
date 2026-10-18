#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mInstanceName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mInstanceName;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI VolumeCreationDataComponent(::VolumeCreationDataComponent const&);

    MCNAPI VolumeCreationDataComponent(::std::string const& identifier, ::std::string const& name);

    MCNAPI ::VolumeCreationDataComponent& operator=(::VolumeCreationDataComponent&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
#else // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::VolumeCreationDataComponent const&);

    MCNAPI void* $ctor(::std::string const& identifier, ::std::string const& name);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
