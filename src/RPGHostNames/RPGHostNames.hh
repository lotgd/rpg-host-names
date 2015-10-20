<?hh

namespace LotGD\RPGHostNames;

class RPGHostNames {
  private static Vector<string> $adjectives = Vector {
    'ancient',
    'arcane',
    'arcane',
    'black',
    'bright',
    'carven',
    'chilled',
    'clear',
    'cloudy',
    'cloudy',
    'cloven',
    'dark',
    'deadly',
    'dim',
    'distant',
    'dragons',
    'empty',
    'faded',
    'faint',
    'falling',
    'far',
    'forlorn',
    'fragrant',
    'glowing',
    'grim',
    'hidden',
    'kindled',
    'luminous',
    'misty',
    'questing',
    'rainy',
    'riven',
    'ruined',
    'shady',
    'shining',
    'steep',
    'stormy',
    'towering',
    'visionary',
    'weary',
    'winding',
    'wizards',
  };

  private static Vector<string> $nouns = Vector {
    'ax',
    'balrog',
    'bane',
    'boat',
    'brook',
    'cave',
    'cavern',
    'clearing',
    'cleft',
    'cliff',
    'creek',
    'dale',
    'earth',
    'elf',
    'falls',
    'fellowship',
    'fire',
    'forest',
    'glenn',
    'gorge',
    'hall',
    'hole',
    'meadow',
    'mountain',
    'orc',
    'path',
    'pinnacle',
    'pit',
    'quest',
    'reaches',
    'ridge',
    'river',
    'ruins',
    'secret',
    'shadow',
    'ship',
    'spire',
    'staff',
    'stone',
    'stream',
    'sword',
    'tide',
    'tower',
    'vale',
    'valley',
    'wand',
    'wind',
    'wolf',
    'wood',
    'wraith',
    'wright',
  };

  public static function adjective() : string {
    $index = mt_rand(0, self::$adjectives->count() - 1);
    return self::$adjectives[$index];
  }

  public static function noun() : string {
    $index = mt_rand(0, self::$nouns->count() - 1);
    return self::$nouns[$index];
  }

  public static function generate(int $additionalDigits = 0) : string {
    $name = '';

    $name = self::adjective() . '-' . self::noun();

    if ($additionalDigits > 0) {
      $name .= '-';
      for ($i = 0; $i < $additionalDigits; $i++) {
        $name .= mt_rand(0, 9);
      }
    }
    return $name;
  }
}
