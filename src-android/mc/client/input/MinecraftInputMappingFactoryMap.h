#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/InputMappingFactory.h"
#include "mc/deps/input/InputMappingFactoryMap.h"

// auto generated forward declare list
// clang-format off
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftInputMappingFactoryMap : public ::InputMappingFactoryMap {
public:
    // MinecraftInputMappingFactoryMap inner types declare
    // clang-format off
    class NullInputMappingFactory;
    // clang-format on

    // MinecraftInputMappingFactoryMap inner types define
    class NullInputMappingFactory : public ::InputMappingFactory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 664, ::InputMapping const> mEmptyInputMapping;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~NullInputMappingFactory();

        virtual ::InputMapping const* getMapping(std::string const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::InputMapping const* $getMapping(std::string const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                            mCIDToClientMap;
    ::ll::TypedStorage<8, 672, ::MinecraftInputMappingFactoryMap::NullInputMappingFactory> mNullInputMappingFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputMappingFactoryMap();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftInputMappingFactoryMap();

    virtual ::InputMappingFactory& getInputMappingFactory(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::InputMappingFactory& $getInputMappingFactory(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
