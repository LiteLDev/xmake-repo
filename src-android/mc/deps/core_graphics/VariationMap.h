#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace cg {

struct VariationMap {
public:
    // VariationMap inner types define
    using MaterialJsonVariationMap = std::map<std::string, cg::VariationMap>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMaterialJsonVariationMap;
    ::ll::UntypedStorage<8, 16> mVariantJson;
    // NOLINTEND

public:
    // prevent constructor by default
    VariationMap& operator=(VariationMap const&);
    VariationMap(VariationMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VariationMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cg
