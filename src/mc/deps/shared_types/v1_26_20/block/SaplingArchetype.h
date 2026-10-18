#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SaplingArchetype {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mQuadrupleSaplingTree;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // prevent constructor by default
    SaplingArchetype(SaplingArchetype const&);
    SaplingArchetype();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype const&);

    MCFOLD bool operator==(::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype const&) const;

    MCAPI ~SaplingArchetype();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
