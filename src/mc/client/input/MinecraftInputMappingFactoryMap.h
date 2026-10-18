#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class MinecraftInputMappingFactoryMap {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecraftInputMappingFactoryMap inner types declare
    // clang-format off
    class NullInputMappingFactory;
    // clang-format on

    // MinecraftInputMappingFactoryMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class NullInputMappingFactory : public ::InputMappingFactory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 720, ::InputMapping const> mEmptyInputMapping;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::InputMapping const* getMapping(::std::string const& mappingName) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCFOLD ::InputMapping const* $getMapping(::std::string const& mappingName);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const> const> mCIDToClientMap;
    ::ll::TypedStorage<8, 728, ::MinecraftInputMappingFactoryMap::NullInputMappingFactory> mNullInputMappingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMappingFactory& getInputMappingFactory(int controllerId) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InputMappingFactory& $getInputMappingFactory(int controllerId);
    // NOLINTEND
#else // @header-generator platform
    class NullInputMappingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
};
