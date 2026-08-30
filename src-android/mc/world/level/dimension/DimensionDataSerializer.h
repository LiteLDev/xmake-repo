#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class LevelStorage;
struct DimensionType;
// clang-format on

class DimensionDataSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSaveCounter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string _createLevelStorageID(std::string const&, std::string const&, std::string const&);

    MCNAPI std::string createSaveID(std::string const&, std::string const&);

    MCNAPI void deleteDataWithID(std::string const&, ::LevelStorage&);

    MCNAPI void forEachKeyWithDimensionPrefix(
        std::string const&,
        std::string const&,
        ::DimensionType,
        ::LevelStorage&,
        std::function<void(const std::string&, const CompoundTag&)> const&
    );

    MCNAPI void saveDataWithID(std::string const&, ::CompoundTag const&, ::LevelStorage&);
    // NOLINTEND
};
