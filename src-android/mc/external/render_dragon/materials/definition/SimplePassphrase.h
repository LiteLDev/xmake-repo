#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition::EncryptionVariants {

struct SimplePassphrase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> passphrase;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePassphrase& operator=(SimplePassphrase const&);
    SimplePassphrase();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& signature();
    // NOLINTEND
};

} // namespace dragon::materials::definition::EncryptionVariants
