#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct utf8proc_property_struct {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk6bb56c;
    ::ll::UntypedStorage<2, 2> mUnka84bd3;
    ::ll::UntypedStorage<2, 2> mUnkbbc66e;
    ::ll::UntypedStorage<2, 2> mUnk9ace3f;
    ::ll::UntypedStorage<8, 8> mUnkede343;
    uint                       mUnkff23db : 1;
    ::ll::UntypedStorage<4, 4> mUnkbc5199;
    ::ll::UntypedStorage<4, 4> mUnke300be;
    ::ll::UntypedStorage<4, 4> mUnk240f2e;
    ::ll::UntypedStorage<4, 4> mUnk182266;
    ::ll::UntypedStorage<4, 4> mUnk894f00;
    uint                       mUnk9213d0 : 1;
    uint                       mUnke9fc54 : 1;
    uint                       mUnk72b6d3 : 1;
    uint                       mUnk86845b : 1;
    ::ll::UntypedStorage<8, 8> mUnkbc0417;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    utf8proc_property_struct& operator=(utf8proc_property_struct const&);
    utf8proc_property_struct(utf8proc_property_struct const&);
    utf8proc_property_struct();
#endif // @header-generator platform
};
