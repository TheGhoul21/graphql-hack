<?hh

namespace GraphQLHack\Language\AST\Node;

use GraphQLHack\Language\AST\Location;

class Document {
  public string $kind = 'Document';
  public function __construct(public array<Definition> $definitions, public ?Location $location) {

  }
}
