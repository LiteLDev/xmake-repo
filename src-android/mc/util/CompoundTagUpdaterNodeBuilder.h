#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdater.h"

// auto generated forward declare list
// clang-format off
class CompoundTagEditHelper;
// clang-format on

class CompoundTagUpdaterNodeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUpdaterNode;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTagUpdaterNodeBuilder _addChildNode();

    MCNAPI ::CompoundTagUpdaterNodeBuilder& edit(std::string const&, std::function<void(CompoundTagEditHelper&)>&&);

    MCNAPI void fork(ulong, std::function<void(CompoundTagUpdaterNodeBuilder&, ulong)>&&);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& match(std::string const&, std::string);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchInteger(std::string const&, long);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchLiteral(std::string const&, std::string);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& popVisit();

    MCNAPI ::CompoundTagUpdaterNodeBuilder& remove(std::string const&);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& rename(std::string const&, std::string const&);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& tryEdit(std::string const&, std::function<void(CompoundTagEditHelper&)>&&);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& visit(std::string const&);
    // NOLINTEND
};
