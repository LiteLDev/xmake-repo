#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/ParsedAtlasNodeElement.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

struct ParsedAtlasNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      mName;
    ::ll::TypedStorage<1, 1, bool>                                              mQuad;
    ::ll::TypedStorage<1, 1, bool>                                              mIsAdditive;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<ParsedAtlasNodeElement>>> mElementCollections;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedAtlasNode& operator=(ParsedAtlasNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParsedAtlasNode();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
