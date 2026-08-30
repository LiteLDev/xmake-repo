#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/ICharacterCollection.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IPersonaImageProvider;
class ISkinRepository;
class PersonaGeometryBuilder;
struct PersonaCharacter;
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

namespace persona {

class CharacterCollection : public ::persona::ICharacterCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaImageProvider&>                                            mImageProvider;
    ::ll::TypedStorage<8, 8, ::ISkinRepository&>                                                  mSkinRepository;
    ::ll::TypedStorage<8, 8, ::PersonaGeometryBuilder&>                                           mGeometryBuilder;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<PersonaCharacter>>> mCharacters;
    ::ll::TypedStorage<4, 40, std::mutex>            mCharactersToRemoveLock;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mCharactersToRemove;
    ::ll::TypedStorage<4, 4, uint>                   mCharacterCount;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterCollection& operator=(CharacterCollection const&);
    CharacterCollection(CharacterCollection const&);
    CharacterCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const&);

    virtual ::PersonaCharacter& getCharacter(std::string const&);

    virtual void removeCharacter(::persona::PersonaCharacterHandle const&);

    virtual void removeCharacter(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CharacterCollection(::ISkinRepository&, ::IPersonaImageProvider&, ::PersonaGeometryBuilder&);

    MCNAPI void _removeCharacter(std::string const&);

    MCNAPI ::PersonaCharacter& addCharacter(::persona::ProfileType, std::string const&);

    MCNAPI void removeCharactersQueuedForRemoval();

    MCNAPI ~CharacterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ISkinRepository&, ::IPersonaImageProvider&, ::PersonaGeometryBuilder&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PersonaCharacter& $getCharacter(::persona::PersonaCharacterHandle const&);

    MCNAPI ::PersonaCharacter& $getCharacter(std::string const&);

    MCNAPI void $removeCharacter(::persona::PersonaCharacterHandle const&);

    MCNAPI void $removeCharacter(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
