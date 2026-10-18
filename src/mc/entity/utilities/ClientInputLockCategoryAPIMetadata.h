#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/entity/enums/ClientInputLockCategory.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ClientInputLockCategoryAPIMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory>   mValue;
    ::ll::TypedStorage<8, 24, ::Scripting::TaggedBinding> mScriptVersion;
    ::ll::TypedStorage<8, 24, std::string>                mScriptFacingName;
    ::ll::TypedStorage<8, 24, std::string>                mCommandFacingName;
    ::ll::TypedStorage<8, 24, std::string>                mCommandLocalizationTag;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk6f9dc3;
    ::ll::UntypedStorage<8, 24> mUnk604d0b;
    ::ll::UntypedStorage<8, 32> mUnkbed38e;
    ::ll::UntypedStorage<8, 32> mUnked24bf;
    ::ll::UntypedStorage<8, 32> mUnkcf13aa;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputLockCategoryAPIMetadata& operator=(ClientInputLockCategoryAPIMetadata const&);
    ClientInputLockCategoryAPIMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientInputLockCategoryAPIMetadata(::ClientInputLockCategoryAPIMetadata const&);

    MCNAPI ~ClientInputLockCategoryAPIMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();

    MCNAPI static std::vector<std::string> getCommandFacingNames();

    MCNAPI static std::optional<ClientInputLockCategoryAPIMetadata> getMetadata(::ClientInputLockCategory);
#else // @header-generator platform
    MCNAPI static ::std::array<::ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientInputLockCategoryAPIMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
