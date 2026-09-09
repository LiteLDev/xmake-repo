#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Scoreboard;
class TextObjectRoot;
namespace Json { class Value; }
// clang-format on

class ResolvedTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mResolvedTextObjectJson;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedTextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getAsJsonString() const;
    // NOLINTEND
};
