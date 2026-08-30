#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct MinecoinCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mCoinCount;
    ::ll::TypedStorage<4, 4, uint>         mBonusCoinCount;
    ::ll::TypedStorage<8, 24, std::string> mMinClientVersion;
    ::ll::TypedStorage<8, 24, std::string> mSKU;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecoinCustom& operator=(MinecoinCustom const&);
    MinecoinCustom(MinecoinCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*);
    // NOLINTEND
};
