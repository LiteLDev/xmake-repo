#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevel;
class MapItemSavedData;
class TrimMaterialRegistry;
class TrimPatternRegistry;
struct ActorUniqueID;
// clang-format on

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<TrimPatternRegistry> const>        mTrimPatternRegistry;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const TrimMaterialRegistry> const> mTrimMaterialRegistry;
        ::ll::UntypedStorage<8, 32>                                                mBaseGameVersion;
        ::ll::UntypedStorage<8, 64>                                                mExperiments;
        ::ll::UntypedStorage<8, 48>                                                mGetMapSavedDataByActorUniqueId;
        ::ll::UntypedStorage<8, 48>                                                mGetMapSavedDataByCampoundTag;
        ::ll::UntypedStorage<8, 48>                                                mExpandMapByID;
        ::ll::UntypedStorage<8, 48>                                                mCopyAndLockMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Impl(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftingContext::Impl>> mPimpl;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftingContext(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);

    MCNAPI ::BaseGameVersion getBaseGameVersion() const;

    MCNAPI std::weak_ptr<const TrimMaterialRegistry> const getTrimMaterialRegistry() const;

    MCNAPI std::weak_ptr<TrimPatternRegistry> const getTrimPatternRegistry();

    MCNAPI std::weak_ptr<const TrimPatternRegistry> const getTrimPatternRegistry() const;

    MCNAPI ~CraftingContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
