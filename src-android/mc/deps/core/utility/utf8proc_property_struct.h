#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct utf8proc_property_struct {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>      category;
    ::ll::TypedStorage<2, 2, short>      combining_class;
    ::ll::TypedStorage<2, 2, short>      bidi_class;
    ::ll::TypedStorage<2, 2, short>      decomp_type;
    ::ll::UntypedStorage<8, 8>           decomp_mapping;
    uint                                 bidi_mirrored : 1;
    ::ll::TypedStorage<4, 4, int>        uppercase_mapping;
    ::ll::TypedStorage<4, 4, int>        lowercase_mapping;
    ::ll::TypedStorage<4, 4, int>        titlecase_mapping;
    ::ll::TypedStorage<4, 4, int>        comb1st_index;
    ::ll::UntypedStorage<4, 4>           comb2nd_index;
    uint                                 comp_exclusion   : 1;
    uint                                 ignorable        : 1;
    uint                                 control_boundary : 1;
    uint                                 extend           : 1;
    ::ll::TypedStorage<8, 8, int const*> casefold_mapping;
    // NOLINTEND
};
