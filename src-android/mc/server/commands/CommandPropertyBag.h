#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
namespace Json { class Value; }
// clang-format on

class CommandPropertyBag : public ::PropertyBag {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandPropertyBag();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(std::string const&, ::Json::Value const&);

    MCNAPI void set(std::string const&, ::BlockPos const&);

    MCNAPI void set(std::string const&, ::Vec3 const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
