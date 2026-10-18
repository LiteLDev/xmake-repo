#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class DimensionHeightRange;
class LevelSeed64;
// clang-format on

struct MetaDataTypeVisitor_Get {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CompoundTag const&> mSource;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>   mMetaDataTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const> mMetaDataTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MetaDataTypeVisitor_Get& operator=(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<
        BaseGameVersion,
        std::string,
        LevelSeed64,
        GeneratorType,
#else // @header-generator platform
    MCAPI ::std::optional<::std::variant<
        ::BaseGameVersion,
        ::std::string,
        ::LevelSeed64,
        ::GeneratorType,
#endif // @header-generator platform
        bool,
        short,
#if defined(LL_PLAT_A) // @header-generator platform
        DimensionHeightRange,
        NeighborAwareBlockUpgradeVersionType>>
           operator()(::BaseGameVersion const&) const;
#else // @header-generator platform
        ::DimensionHeightRange,
        ::NeighborAwareBlockUpgradeVersionType>>
    operator()(::std::string const&) const;

    MCAPI ::std::optional<::std::variant<
        ::BaseGameVersion,
        ::std::string,
        ::LevelSeed64,
        ::GeneratorType,
        bool,
        short,
        ::DimensionHeightRange,
        ::NeighborAwareBlockUpgradeVersionType>>
    operator()(::BaseGameVersion const&) const;

    MCAPI ~MetaDataTypeVisitor_Get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
