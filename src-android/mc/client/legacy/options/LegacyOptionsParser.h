#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/options/LegacyOption.h"
#include "mc/client/legacy/options/LegacyStat.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

class LegacyOptionsParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<LegacyOption, std::variant<bool, uchar, uint>>>     mOptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<LegacyStat, std::variant<uint, std::vector<uint>>>> mStats;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOptionsParser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyOptionsParser(std::vector<uchar> const&);

    MCNAPI uint _aggregateSmallStat(::ReadOnlyBinaryStream&);

    MCNAPI void _parseOptions(std::vector<uchar> const&);

    MCNAPI void _parseStats(std::vector<uchar> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<uchar> const&);
    // NOLINTEND
};
