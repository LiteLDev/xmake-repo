#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class IClientDimensionExtensions;
class ILevel;
class Scheduler;
#else // @header-generator platform
#endif // @header-generator platform
struct DerivedDimensionArguments;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { class StructureSetRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct DimensionFactoryArguments {
public:
    // DimensionFactoryArguments inner types declare
    // clang-format off
    struct Dependencies;
    // clang-format on

    // DimensionFactoryArguments inner types define
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24> mLevel;
        ::ll::UntypedStorage<8, 24> mScheduler;
        ::ll::UntypedStorage<8, 16> mStructureSetRegistry;
        ::ll::UntypedStorage<8, 64> mCreateClientExtensions;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk63480c;
        ::ll::UntypedStorage<8, 24> mUnk1722af;
        ::ll::UntypedStorage<8, 8>  mUnke4956f;
        ::ll::UntypedStorage<8, 64> mUnkdf6784;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Dependencies();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI ~Dependencies();
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mCreate;
    ::ll::UntypedStorage<8, 64> mInit;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::OwnerPtr<
            ::Dimension>(::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const&, ::std::string const&)
                                        const>>
                                                                                     mCreate;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::Dimension&) const>> mInit;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DimensionFactoryArguments& operator=(DimensionFactoryArguments const&);
    DimensionFactoryArguments(DimensionFactoryArguments const&);
    DimensionFactoryArguments();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionFactoryArguments create(::DimensionFactoryArguments::Dependencies&&);
#else // @header-generator platform
    MCNAPI static ::DimensionFactoryArguments create(::DimensionFactoryArguments::Dependencies&& deps);
#endif // @header-generator platform
    // NOLINTEND
};
