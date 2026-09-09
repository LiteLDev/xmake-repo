#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockPartVisibilityDescription : public ::BlockComponentDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::string const& getName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND
};
