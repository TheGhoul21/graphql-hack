<?hh

namespace GraphQLHack\Language;

class SourceLocation {
  public function __construct(private int $line, private int $column) {

  }


  public static function getLocation(Source $source, int $position):SourceLocation {

     $lineRegexp = '/\r\n|[\n\r]/g';
     $line = 1;
     $column = $position + 1;
     $match = null;
    preg_match($lineRegexp, $source->getBody(), $match, PREG_OFFSET_CAPTURE);
    while ($match && $match[$line-1][1]< $position) {
      $line += 1;
      $column = $position + 1 - ($match[$line-1][1] + strlen($match[$line-1][0]));
    }
    return new SourceLocation($line, $column);
  }
}
