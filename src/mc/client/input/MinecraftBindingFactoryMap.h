#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/BindingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftBindingFactoryMap : public ::BindingFactoryMap {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/BindingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftBindingFactoryMap : public ::BindingFactoryMap {
#else // @header-generator platform
class MinecraftBindingFactoryMap {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecraftBindingFactoryMap inner types declare
    // clang-format off
    class NullBindingFactory;
    // clang-format on

    // MinecraftBindingFactoryMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class NullBindingFactory : public ::BindingFactory {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~NullBindingFactory();

        virtual std::function<bool()> getBooleanBinding(uint) const;

        virtual std::function<float()> getFloatBinding(uint) const;

        virtual std::function<std::string()> getStringBinding(uint) const;

        virtual std::function<glm::vec<2, float, (glm::qualifier)0>()> getPointBinding(uint) const;

        virtual std::function<RectangleArea()> getAreaBinding(uint) const;

        virtual std::function<void(RectangleArea)> getDynamicAreaBinding(uint) const;

        virtual std::function<void(float)> getFloatSetter(uint) const;

        virtual void setCustomAreaBinding(std::string const&, ::RectangleArea);

        virtual void removeCustomAreaBinding(std::string const&);

        virtual std::vector<uint> getCustomAreaBindingNames() const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::function<bool()> $getBooleanBinding(uint) const;

        MCNAPI std::function<float()> $getFloatBinding(uint) const;

        MCNAPI std::function<std::string()> $getStringBinding(uint) const;

        MCNAPI std::function<glm::vec<2, float, (glm::qualifier)0>()> $getPointBinding(uint) const;

        MCNAPI std::function<RectangleArea()> $getAreaBinding(uint) const;

        MCNAPI std::function<void(RectangleArea)> $getDynamicAreaBinding(uint) const;

        MCNAPI std::function<void(float)> $getFloatSetter(uint) const;

        MCNAPI void $setCustomAreaBinding(std::string const&, ::RectangleArea);

        MCNAPI void $removeCustomAreaBinding(std::string const&);

        MCNAPI std::vector<uint> $getCustomAreaBindingNames() const;
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
    ::ll::UntypedStorage<8, 24>                                                      mCIDToClientMap;
    ::ll::TypedStorage<8, 8, ::MinecraftBindingFactoryMap::NullBindingFactory const> mNullBindingFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftBindingFactoryMap();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftBindingFactoryMap();

    virtual ::BindingFactory const& getBindingFactory(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BindingFactory const& $getBindingFactory(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class NullBindingFactory : public ::BindingFactory {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::function<bool()> getBooleanBinding(uint name) const /*override*/;

        virtual ::std::function<float()> getFloatBinding(uint) const /*override*/;

        virtual ::std::function<::std::string()> getStringBinding(uint) const /*override*/;

        virtual ::std::function<::glm::vec2()> getPointBinding(uint) const /*override*/;

        virtual ::std::function<::RectangleArea()> getAreaBinding(uint) const /*override*/;

        virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint) const /*override*/;

        virtual ::std::function<void(float)> getFloatSetter(uint) const /*override*/;

        virtual void setCustomAreaBinding(::std::string const&, ::RectangleArea) /*override*/;

        virtual void removeCustomAreaBinding(::std::string const&) /*override*/;

        virtual ::std::vector<uint> getCustomAreaBindingNames() const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::function<bool()> $getBooleanBinding(uint name) const;

        MCAPI ::std::function<float()> $getFloatBinding(uint) const;

        MCAPI ::std::function<::std::string()> $getStringBinding(uint) const;

        MCAPI ::std::function<::glm::vec2()> $getPointBinding(uint) const;

        MCAPI ::std::function<::RectangleArea()> $getAreaBinding(uint) const;

        MCAPI ::std::function<void(::RectangleArea)> $getDynamicAreaBinding(uint) const;

        MCAPI ::std::function<void(float)> $getFloatSetter(uint) const;

        MCFOLD void $setCustomAreaBinding(::std::string const&, ::RectangleArea);

        MCFOLD void $removeCustomAreaBinding(::std::string const&);

        MCFOLD ::std::vector<uint> $getCustomAreaBindingNames() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const>> mCIDToClientMap;
    ::ll::TypedStorage<8, 8, ::MinecraftBindingFactoryMap::NullBindingFactory const>          mNullBindingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BindingFactory const& getBindingFactory(int controllerId) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BindingFactory const& $getBindingFactory(int controllerId) const;
    // NOLINTEND
#else // @header-generator platform
    class NullBindingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
};
