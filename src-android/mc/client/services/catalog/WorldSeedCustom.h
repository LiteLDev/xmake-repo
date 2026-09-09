#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct WorldSeedCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSeed;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCustom& operator=(WorldSeedCustom const&);
    WorldSeedCustom(WorldSeedCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*);
    // NOLINTEND
};
