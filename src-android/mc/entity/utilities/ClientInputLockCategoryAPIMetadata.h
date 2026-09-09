#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct ClientInputLockCategoryAPIMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory>   mValue;
    ::ll::TypedStorage<8, 24, ::Scripting::TaggedBinding> mScriptVersion;
    ::ll::TypedStorage<8, 24, std::string>                mScriptFacingName;
    ::ll::TypedStorage<8, 24, std::string>                mCommandFacingName;
    ::ll::TypedStorage<8, 24, std::string>                mCommandLocalizationTag;
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
    MCNAPI static std::array<ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();

    MCNAPI static std::vector<std::string> getCommandFacingNames();

    MCNAPI static std::optional<ClientInputLockCategoryAPIMetadata> getMetadata(::ClientInputLockCategory);
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
