#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
class ResourcePack;
class ResourcePackStack;
namespace mce { class UUID; }
// clang-format on

class BaseGamePackSlices {
public:
    // BaseGamePackSlices inner types declare
    // clang-format off
    struct BaseGameVersionPack;
    // clang-format on

    // BaseGamePackSlices inner types define
    struct BaseGameVersionPack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>                                               mBaseGameVersion;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mPack;
        // NOLINTEND

    public:
        // prevent constructor by default
        BaseGameVersionPack& operator=(BaseGameVersionPack const&);
        BaseGameVersionPack();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BaseGameVersionPack();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BaseGamePackSlices::BaseGameVersionPack>> mBaseGameVersionPacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGamePackSlices();

    MCNAPI void addFromVersions(
        std::vector<BaseGameVersion> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        ::mce::UUID const&
    );

    MCNAPI void applyPackSlices(
        ::BaseGameVersion const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        ::ResourcePackStack&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
