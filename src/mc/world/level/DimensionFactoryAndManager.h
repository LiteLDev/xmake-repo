#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionFactory;
class DimensionManager;
// clang-format on

struct DimensionFactoryAndManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mDimensionFactory;
    ::ll::UntypedStorage<8, 16> mDimensionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionFactoryAndManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DimensionFactoryAndManager(
        ::Bedrock::UniqueOwnerPointer<DimensionFactory>,
        ::Bedrock::UniqueOwnerPointer<DimensionManager>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::Bedrock::UniqueOwnerPointer<DimensionFactory>, ::Bedrock::UniqueOwnerPointer<DimensionManager>);
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DimensionFactory>>> mDimensionFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DimensionManager>>> mDimensionManager;
#endif // @header-generator platform
    // NOLINTEND
};
