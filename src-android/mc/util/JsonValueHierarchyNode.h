#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class JsonValueHierarchyNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*> mValue;
    ::ll::UntypedStorage<8, 24>              mFormatVersion;
    ::ll::UntypedStorage<8, 32>              mMinEngineVersion;
    ::ll::TypedStorage<8, 24, std::string>   mSourceFileName;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonValueHierarchyNode(JsonValueHierarchyNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonValueHierarchyNode();

    MCNAPI JsonValueHierarchyNode(::JsonValueHierarchyNode&&);

    MCNAPI JsonValueHierarchyNode(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, std::string const&);

    MCNAPI ~JsonValueHierarchyNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JsonValueHierarchyNode&&);

    MCNAPI void* $ctor(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
