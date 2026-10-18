#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class ItemInstance;
// clang-format on

class CommandItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mField_5940acc2;
#else // @header-generator platform
    union {
        struct {
            ::ll::TypedStorage<2, 2, short> mVersion;
            ::ll::TypedStorage<1, 1, bool>  mOverrideAux;
            ::ll::TypedStorage<4, 4, int>   mId;
        };
        ::ll::TypedStorage<8, 8, uint64> mVersionId;
    };
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandItem();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ItemInstance createInstance(int count) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance createInstance(int) const;

    MCNAPI std::optional<ItemInstance> createInstance(int, int, ::CommandOutput&, bool) const;

    MCNAPI int getId() const;

    MCNAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ::std::optional<::ItemInstance>
    createInstance(int count, int aux, ::CommandOutput& output, bool requireExactAux) const;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandItem>();
// clang-format on
#endif // @header-generator platform
