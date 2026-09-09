#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/QueryDocument.h"
#include "mc/world/actor/player/persona/OwnershipFilterType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace persona {

struct CategoryQueryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mHeader;
    ::ll::TypedStorage<4, 4, ::persona::OwnershipFilterType> mOwnershipFilterType;
    ::ll::TypedStorage<4, 4, int>                            mCycleAmount;
    ::ll::TypedStorage<8, 400, ::QueryDocument>              mQueryDoc;
    ::ll::TypedStorage<1, 1, bool>                           mIsFeatured;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CategoryQueryDocument(
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::string&&,
        ::persona::OwnershipFilterType&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::vector<std::string>&&,
        std::string&&,
        ::persona::OwnershipFilterType&&
    );
    // NOLINTEND
};

} // namespace persona
