#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IClientDimensionExtensions;
class ILevel;
class Scheduler;
struct DerivedDimensionArguments;
namespace br::worldgen { class StructureSetRegistry; }
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
        ::ll::UntypedStorage<8, 24> mLevel;
        ::ll::UntypedStorage<8, 24> mScheduler;
        ::ll::UntypedStorage<8, 16> mStructureSetRegistry;
        ::ll::UntypedStorage<8, 64> mCreateClientExtensions;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Dependencies();
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
    ::ll::UntypedStorage<8, 64> mCreate;
    ::ll::UntypedStorage<8, 64> mInit;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionFactoryArguments& operator=(DimensionFactoryArguments const&);
    DimensionFactoryArguments(DimensionFactoryArguments const&);
    DimensionFactoryArguments();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DimensionFactoryArguments create(::DimensionFactoryArguments::Dependencies&&);
    // NOLINTEND
};
