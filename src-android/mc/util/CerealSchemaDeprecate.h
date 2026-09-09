#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/CerealSchemaUpgrade.h"

class CerealSchemaDeprecate : public ::CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mDeprecateVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealSchemaDeprecate();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CerealSchemaDeprecate();

    virtual bool previousSchema(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    virtual void upgradeToNext(::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, ::SemVersion const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealSchemaDeprecate(::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $previousSchema(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
    ) const;

    MCNAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
