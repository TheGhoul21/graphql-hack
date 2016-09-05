<?hh

namespace GraphQLHack\Language;

class Source {
  public function getBody():string {
    return $this->body;
  }
  public function __construct(private string $body, private string $name = 'GraphQL') {

  }
}
