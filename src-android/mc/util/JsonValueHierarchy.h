#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/JsonValueHierarchyNode.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class JsonValueHierarchy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<JsonValueHierarchyNode>> mJson;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value const& get(std::string const&) const;

    MCNAPI ::Json::Value const& get(std::string const&, ::SemVersion const&) const;

    MCNAPI ::Json::Value const& get(std::string const&, std::string const&) const;

    MCNAPI ::SemVersion const& getFormatVersion() const;

    MCNAPI std::vector<JsonValueHierarchyNode> getMemberArray(std::string const&) const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI bool isMember(std::string const&) const;

    MCNAPI ::JsonValueHierarchy& operator=(::JsonValueHierarchy const&);

    MCNAPI ::Json::Value const& operator[](std::string const&) const;

    MCNAPI void pushEmptyNode();

    MCNAPI void push_back(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, std::string const&);
    // NOLINTEND
};
