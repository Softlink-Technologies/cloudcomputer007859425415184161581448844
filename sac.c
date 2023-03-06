# Define the AWS provider and region
provider "aws" {
  region = "us-west-2"
}

# Define the resources to create
resource "aws_instance" "example" {
  ami           = "ami-0c55b159cbfafe1f0"
  instance_type = "t2.micro"
  tags = {
    Name = "example"
  }
}
