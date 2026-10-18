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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::weak_ptr<TrimPatternRegistry> const>        mTrimPatternRegistry;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const TrimMaterialRegistry> const> mTrimMaterialRegistry;
        ::ll::UntypedStorage<8, 32>                                                mBaseGameVersion;
        ::ll::UntypedStorage<8, 64>                                                mExperiments;
        ::ll::UntypedStorage<8, 48>                                                mGetMapSavedDataByActorUniqueId;
        ::ll::UntypedStorage<8, 48>                                                mGetMapSavedDataByCampoundTag;
        ::ll::UntypedStorage<8, 48>                                                mExpandMapByID;
        ::ll::UntypedStorage<8, 48>                                                mCopyAndLockMap;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TrimPatternRegistry> const>        mTrimPatternRegistry;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TrimMaterialRegistry const> const> mTrimMaterialRegistry;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                   mBaseGameVersion;
        ::ll::TypedStorage<8, 72, ::Experiments>                                       mExperiments;
        ::ll::TypedStorage<8, 64, ::std::function<::MapItemSavedData*(::ActorUniqueID)>>
            mGetMapSavedDataByActorUniqueId;
        ::ll::TypedStorage<8, 64, ::std::function<::MapItemSavedData*(::CompoundTag const*)>>
            mGetMapSavedDataByCampoundTag;
        ::ll::TypedStorage<8, 64, ::std::function<::ActorUniqueID(::ActorUniqueID, bool)>> mExpandMapByID;
        ::ll::TypedStorage<8, 64, ::std::function<bool(::ActorUniqueID, ::ActorUniqueID)>> mCopyAndLockMap;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit Impl(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
#else // @header-generator platform
        MCAPI explicit Impl(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Impl();
#else // @header-generator platform
        MCAPI ~Impl();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
#else // @header-generator platform
        MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftingContext::Impl>> mPimpl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftingContext::Impl>> mPimpl;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CraftingContext(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
#else // @header-generator platform
    MCAPI explicit CraftingContext(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseGameVersion getBaseGameVersion() const;

    MCNAPI std::weak_ptr<const TrimMaterialRegistry> const getTrimMaterialRegistry() const;

    MCNAPI std::weak_ptr<TrimPatternRegistry> const getTrimPatternRegistry();

    MCNAPI std::weak_ptr<const TrimPatternRegistry> const getTrimPatternRegistry() const;

    MCNAPI ~CraftingContext();
#else // @header-generator platform
    MCAPI ~CraftingContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
